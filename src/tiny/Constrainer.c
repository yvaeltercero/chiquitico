/****************************************************************
              Copyright (C) 1986 by Manuel E. Bermudez
              Translated to C - 1991
*****************************************************************/

#include <stdio.h>
#include <header/Open_File.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h> 
#include <header/Tree.h>
#include <header/Dcln.h>
#include <header/Constrainer.h>

#define ProgramNode    1
#define TypesNode      2
#define TypeNode       3
#define DclnsNode      4
#define DclnNode       5
#define IntegerTNode   6
#define BooleanTNode   7
#define BlockNode      8
#define AssignNode     9
#define OutputNode     10
#define IfNode         11
#define WhileNode      12
#define NullNode       13
#define GENode         14
#define LENode         15
#define GTNode         16
#define NENode         17
#define EQNode         18
#define LTNode         19
#define PlusNode       20
#define MinusNode      21
#define ORNode         22
#define MODNode        23
#define ANDNode        24
#define PRODNode       25
#define DIVNode        26
#define NOTNode        27
#define UMinusNode     28
#define POWNode        29
#define ReadNode       30
#define EOFNode        31
#define TRUENode       32
#define FALSENode      33
#define IntegerNode    34
#define IdentifierNode 35
#define RepeatNode     36
#define LoopNode       37
#define ExitNode       38
#define SwapNode       39
#define UptoNode       40
#define CaseNode       41
#define CaseClauseNode 42
#define RangeNode      43
#define OtherwiseNode  44
#define DownToNode     45
#define CharacterTNode 46
#define CharacterNode  47
#define ConstsNode     48
#define ConstNode      49
#define LitNode        50
#define SuccNode       51
#define PredNode       52
#define ChrNode        53
#define OrdNode        54
#define StringNode     55

#define NumberOfNodes  55

typedef TreeNode UserType;

/****************************************************************
 Add new node names to the end of the array, keeping in strict
  order with the define statements above, then adjust the i loop
  control variable in InitializeConstrainer().
*****************************************************************/
char *node[] = { "program", "types", "type", "dclns",
                 "var", "integer", "boolean", "block",
                 "assign", "output", "if", "while", 
                 "<null>", ">", "<", ">=",
                 "<>", "=", "<=", "+",
                 "-", "or", "mod", "and",
                 "*", "/", "not", "neg",
                 "pow", "read", "eof", "true", "false",
                 "<integer>", "<identifier>",
                 "repeat", "loop", "exit", "<swap>", 
                 "<upto>", "case", "<case_clause>", "<range>",
                 "<otherwise>", "<downto>", "char", "<char>",
                 "<consts>", "const", "lit", "succ",
                 "pred", "chr", "ord", "<string>"
                };

#define GetTypesTree TypesTree = Child (RootOfTree(1), 2); /*typesnode*/

UserType TypeInteger, TypeBoolean, TypeCharacter;
boolean TraceSpecified;
FILE *TraceFile;
char *TraceFileName;
int NumberTreesRead, index;


TreeNode getMode(TreeNode);
void modeAssign(TreeNode);

void Constrain(void)    
{
   int i;
   InitializeDeclarationTable();
   Tree_File = Open_File("_TREE", "r"); 
   NumberTreesRead = Read_Trees();
   fclose (Tree_File);                     

   AddIntrinsics();

#if 0
   printf("CURRENT TREE\n");
   for (i=1;i<=SizeOf(Tree);i++)
      printf("%2d: %d\n",i,Element(Tree,i));
#endif

   ProcessNode(RootOfTree(1)); 

    
   Tree_File = fopen("_TREE", "w");  
   Write_Trees();
   fclose (Tree_File);                   

   if (TraceSpecified)
      fclose(TraceFile);    
}


void InitializeConstrainer (int argc, char *argv[])
{          
   int i, j;

   InitializeTextModule();
   InitializeTreeModule();

   for (i=0, j=1; i<NumberOfNodes; i++, j++)
      String_Array_To_String_Constant (node[i], j); 
 
   index = System_Flag ("-trace", argc, argv);
 
   if (index)                                       
   {
      TraceSpecified = true; 
      TraceFileName = System_Argument ("-trace", "_TRACE", argc, argv);
      TraceFile = Open_File(TraceFileName, "w");
   }
   else
      TraceSpecified = false;          
}                        

void AddIntrinsics (void)
{
   /* tipos de arbol */
   TreeNode LitTree, TypesTree, TypeBoolTree, TypeIntTree, TypeCharTree;
   /* árbol de tipos */
   AddTree (TypesNode, RootOfTree(1), 2);
   /* boolean */
   TypesTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TypesTree, 1);
   TypesTree = Child (RootOfTree(1), 2);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   AddTree(IdentifierNode, TypeBoolTree, 1);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   AddTree(BooleanTNode, Child(TypeBoolTree, 1), 1);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   /* true */
   AddTree(LitNode, TypeBoolTree, 2);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(IdentifierNode, LitTree, 1);
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(FALSENode, Child( Child(Child(Child (RootOfTree(1), 2), 1), 2), 1), 1);
   /* false */
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(IdentifierNode, LitTree, 2);
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(TRUENode, Child(LitTree, 2), 1);
   /*int*/
   TypesTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TypesTree, 2);
   TypesTree = Child (RootOfTree(1), 2);
   TypeIntTree = Child(Child (RootOfTree(1), 2), 2);
   AddTree(IdentifierNode, TypeIntTree, 1);
   TypeIntTree = Child(Child (RootOfTree(1), 2), 2);
   AddTree(IntegerTNode, Child(TypeIntTree, 1), 1);
   /*char*/
   TypesTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TypesTree, 3);
   TypesTree = Child (RootOfTree(1), 2);
   TypeCharTree = Child(Child (RootOfTree(1), 2), 3);
   AddTree(IdentifierNode, TypeCharTree, 1);
   TypeCharTree = Child(Child (RootOfTree(1), 2), 3);
   AddTree(CharacterTNode, Child(TypeCharTree, 1), 1);
   /* definición de tipos */
   TypeBoolean = Child(Child (RootOfTree(1), 2),1);
   TypeInteger = Child(Child (RootOfTree(1), 2),2);
   TypeCharacter = Child(Child (RootOfTree(1), 2),3);
}

void PrintHeader(TreeNode T, char * message)
{
   printf (message);
   Write_String (stdout,SourceLocation(T));
   printf (" : ");
   printf ("\n");
}

void ErrorHeader (TreeNode T)
{ 
   PrintHeader(T, "<<< CONSTRAINER ERROR >>> AT ");
}

int NKids (TreeNode T)
{
   return (Rank(T));
}

UserType Expression (TreeNode T)
{
   UserType Type1, Type2;
   TreeNode Declaration, Temp1, Temp2, Mode, Mode1, Mode2;
   int NodeCount, Kid, i;

   if (TraceSpecified)
   {
      fprintf (TraceFile, "<<< CONSTRAINER >>> : Expn Processor Node ");
      Write_String (TraceFile, NodeName(T));
      fprintf (TraceFile, "\n");
   }
     
   switch (NodeName(T))
   {
      case LENode :
      case GENode :
      case EQNode :
      case NENode :
      case LTNode :
      case GTNode :
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));

         if (Type1 != Type2)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF ARITMETICAL EXPRESSIONS MUST BE OF SAME TYPE\n");
            printf ("\n");
         }
         return (TypeBoolean);

      case NOTNode :
        Type1 = Expression (Child(T,1));
        if (Type1 != TypeBoolean){
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF 'not' MUST BE TYPE BOOLEAN\n");
            printf ("\n");
        }
        return (TypeBoolean);

      case ORNode :
      case ANDNode :
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));
         if (Type1 != TypeBoolean || Type2 != TypeBoolean){
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF 'or', 'and' ");
            printf ("MUST BE TYPE BOOLEAN\n");
            printf ("\n");
         }
         return (TypeBoolean);

      case PlusNode :
      case MinusNode :
      case UMinusNode:
      case PRODNode :
      case DIVNode :
      case MODNode :
      case POWNode :
         Type1 = Expression (Child(T,1));
         if (Rank(T) == 2)
            Type2 = Expression (Child(T,2));
         else  
            Type2 = TypeInteger;
         if (Type1 != TypeInteger || Type2 != TypeInteger)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF '+', '-', '*', '/', mod ");
            printf ("MUST BE TYPE INTEGER\n");
            printf ("\n");
         }
         return (TypeInteger);
     
      case EOFNode:
         return (TypeBoolean);

      case IntegerNode : 
         return (TypeInteger);

      case CharacterNode:
       return (TypeCharacter);

      case IdentifierNode :
        Declaration = Lookup (NodeName(Child(T,1)), T);	  
        Mode = NodeName(Decoration(Child(Declaration, 1)));
        if(Declaration != NullDeclaration){
            Decorate (T, Declaration);
            if(Mode == TypeNode){
                ErrorHeader(T);
                printf ("CANNOT HAVE A TYPE IN EXPRESSIONS");
                printf ("\n");
            }
            /* declaraciones */
            else if(Mode ==  DclnNode){
                /* boolean */
                if(Decoration(Declaration) == TypeBoolean)
                    return (TypeBoolean);
                /* lit */
                else if(NodeName(Decoration(Declaration)) == TypeNode && NKids(Decoration(Declaration)) >1  && 
                        NodeName(Child(Decoration(Declaration),2) ) == LitNode){
                    return (Decoration(Declaration));
                /* other */
                }else{
                    return (Decoration(Declaration));
                }
            }
        else if(Decoration(Declaration) == TypeBoolean)
            return (TypeBoolean);
        else
            return (Decoration(Declaration));
        }else{
            ErrorHeader(T);
            printf ("INTERNAL ERROR NULL DECLARATION FOUND ");
            printf ("\n");
        }
        return TypeInteger;

     case RangeNode:
            Type1 = Expression(Child(T,1));
            Type2 = Expression(Child(T,2));
            if(Type1 != Type2){
                ErrorHeader(T);
                printf("RANGE IDENTIFIERS DONT MATCH\n");
            }
            return Type1;
            
      case PredNode:
      case SuccNode:
            Type1 = Expression(Child(T,1));
            Decorate(T,Type1);
            if(Type1 != TypeInteger && Type1 != TypeCharacter && 
               !(NodeName(Type1) == TypeNode && NKids(Type1) > 1 && NodeName(Child(Type1,2)) == LitNode) ){
                ErrorHeader(T);
                printf("UNKNOWN TYPE FOR PRED or SUCC\n\n");
            }
            return Type1;

      case OrdNode:
            Type1 = Expression(Child(T,1));
            Decorate(T,TypeInteger);
            if(Type1 != TypeInteger && Type1 != TypeCharacter && 
               !(NodeName(Type1) == TypeNode && NKids(Type1) > 1 && NodeName(Child(Type1,2)) == LitNode) ){
                ErrorHeader(T);
                printf("UNKNOWN TYPE FOR ORD: SHOULD BE LITERAL\n\n");
            }
            return TypeInteger;

      case ChrNode:
            Type1 = Expression(Child(T,1));
            Decorate(T,TypeCharacter);
            if(Type1 != TypeInteger){
                ErrorHeader(T);
                printf("CHR ARGUMENT MUST BE INTEGER\n\n");
            }
            return TypeCharacter;

      default :
         ErrorHeader(T);
         printf ( "UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
}  /* end Expression */

void ProcessNode (TreeNode T) 
{
   int Kid, N;
   String Name1, Name2;
   TreeNode Type1, Type2, Type3, Temp, Mode, Declaration;
   TreeNode Dcln;

   if (TraceSpecified)
   {
      fprintf (TraceFile,
               "<<< CONSTRAINER >>> : Stmt Processor Node ");
      Write_String (TraceFile, NodeName(T));
      fprintf (TraceFile, "\n");
   }

   switch (NodeName(T))
   {
      case ProgramNode :
         OpenScope();
         DTEnter("<loop_ctxt>",T,T);
         DTEnter("<for_ctxt>",T,T);
         Name1 = NodeName(Child(Child(T,1),1));
         Name2 = NodeName(Child(Child(T,NKids(T)),1));

         if (Name1 != Name2)
         {
           ErrorHeader(T);
           printf ("PROGRAM NAMES DO NOT MATCH\n");
           printf ("\n");
         }

         for (Kid = 2; Kid <= NKids(T)-1; Kid++)
             ProcessNode (Child(T,Kid));
         CloseScope();
         break;

      case TypesNode :
      case ConstsNode:
      case DclnsNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
         break;

      case TypeNode :
         /* se define el tipo en la tabla de declaraciones */
         DTEnter(NodeName(Child(Child(T,1),1)),Child(T,1),T);
         /* se decora la raiz y los hijos de la declaración de tipo */
         /* ver GRAN diagrama */
         Decorate(Child(T,1),T);
         Decorate(Child(Child(T,1),1),T);
         if(NKids(T) > 1){
            if(NodeName(Child(T, 2)) == LitNode){
                for(Kid = 1; Kid <= NKids(Child(T, 2)); Kid++){
                    /* se define la declaración */
                    DTEnter (NodeName(Child(Child(Child(T,2),Kid),1)),Child(Child(T,2),Kid),T);
                    /* se establecen las decoraciones */
                    /* ver GRAN diagrama */
                    Decorate(Child(Child(Child(T,2),Kid),1),Child(T,2));
                    Decorate(Child(Child(T,2),Kid),T);
                }
             }else if(NodeName(Child(T,2)) == IdentifierNode){
                Dcln = Lookup(NodeName(Child(Child(T,2),1)),T);
                /* decoraciones del árbol */
                /* ver GRAN diagrama */
                Decorate(Child(T,2),Dcln);
                Decorate(Child(T,1),Decoration(Dcln));
             }else{
                /* Invalid decoration */
                ErrorHeader(T);
                printf("Type must be referenced by a literal or an identifier\n\n");
            }
         }
         break;

      case DclnNode :
         Name1 = NodeName(Child((Child(T,NKids(T))),1));
         Type1 =  Lookup(Name1,T);
         /* decoración del hijo, ver GRAN diagrama */
         Decorate(Child(T,NKids(T)),Type1);
         for (Kid = 1; Kid < NKids(T); Kid++){
            DTEnter(NodeName(Child(Child(T,Kid),1)),Child(T,Kid),T);
            Decorate(Child(T,Kid),Decoration(Type1));
            Decorate(Child(Child(T,Kid),1),T);
         }
         break;

   case ConstNode:
         switch(NodeName(Child(T,2))){
             case IdentifierNode:
                Mode = getMode(Child(T,2));
                if(Mode != LitNode && Mode != ConstNode){
                    ErrorHeader(T);
                    printf ("ERROR>> CONSTANT WITH A TYPE\n\n");
                }
                Type1 = Lookup(NodeName(Child(Child(T,2),1)),T);
                Decorate(Child(T,2),Type1);
                break;

             case IntegerNode:
                Name1 = IntegerTNode;
                Type1 = Lookup(Name1,T);
                break;

             case CharacterNode:
                Name1 = CharacterTNode;
                Type1 = Lookup(Name1,T);
                break;

             default:
               printf("constant doesnt have a type\n\n");
         }
         /* se define la asignación en la DT */
         DTEnter(NodeName(Child(Child(T,1),1)),Child(T,1),T);
         /* se definen las decoraciones de tipo */
         /* ver GRAN diagrama */
         Decorate(Child(T,1), Decoration(Type1));
         Decorate(Child(Child(T,1),1),T);
         break;

      case BlockNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
         break;

      case AssignNode :
          Temp = Lookup("<for_ctxt>", T);
          while(NodeName(Temp) != ProgramNode){
              if(NodeName(Child(Child(Temp,1),1)) == NodeName(Child(Child(T,1),1)) ){
                ErrorHeader(T);
                printf("ERROR>>> FOR LOOP VARIABLE RE-ASSIGNED\n");
              }
              Temp = Decoration(Temp);
          }

          Type1 = Expression (Child(T,1));
          Type2 = Expression (Child(T,2));
          
          modeAssign(Child(T,1));
          
          if (Type1 != Type2){
              ErrorHeader(T);
              printf ("ASSIGNMENT TYPES DO NOT MATCH\n");
              printf ("\n");
          }
          break;

      case OutputNode :
         for(Kid = 1; Kid <= NKids(T); Kid++){
              if(NodeName(Child(T,Kid)) != StringNode)
                  Type1 = Expression(Child(T,Kid));  
              if(NodeName(Child(T,Kid)) == IdentifierNode){
                  Mode = getMode(Child(T,Kid));
                  if(Mode == LitNode){
                      ErrorHeader(T);
                      printf ("ERROR>>> output for enum type: argument must be integer or char\n\n");
                      continue;
                }
              }
              if(Type1 != TypeInteger && Type1 != TypeCharacter && NodeName(Child(T,Kid)) != StringNode){
                  ErrorHeader(T);
                  printf ("ERROR>>> output expression must be integer or char\n\n");
              }
         }
         break;


      case IfNode :
         if (Expression (Child(T,1)) != TypeBoolean)
         {
            ErrorHeader(T);
            printf ("CONTROL EXPRESSION OF 'IF' STMT");
            printf (" IS NOT TYPE BOOLEAN\n");
            printf ("\n");
         } 
         ProcessNode (Child(T,2));
         if (Rank(T) == 3)
            ProcessNode (Child(T,3));
         break;


      case WhileNode :
         if (Expression (Child(T,1)) != TypeBoolean)
         {
            ErrorHeader(T);
            printf ("WHILE EXPRESSION NOT OF TYPE BOOLEAN\n");
            printf ("\n");
         }
         ProcessNode (Child(T,2));
         break;

      case RepeatNode:
         for(Kid = 1; Kid <= NKids(T)-1; Kid++){
             ProcessNode(Child(T,Kid));
         }
         if(Expression(Child(T,NKids(T))) != TypeBoolean){
             ErrorHeader(T);
             printf("REPEAT EXPRESSION NOT BOOLEAN");
             printf("\n");
         }
         break;

      case LoopNode:
         OpenScope();
         DTEnter("<loop_ctxt>",T,T);
         for(Kid = 1; Kid <= NKids(T); Kid++){
         	ProcessNode(Child(T,Kid));
         }
         CloseScope();
         if(Decoration(T) == 0){
            printf("WARNING:\n");
            printf("No 'exit' in loop\n");
         }
         break;

      case ExitNode:
         Temp = Lookup("<loop_ctxt>", T);
         if(NodeName(Temp) != LoopNode){
            ErrorHeader(T);
            printf("'exit' CAN ONLY BE INSIDE A 'loop'\n");
         }else{
            Decorate(T, Temp);
            Decorate(Temp, T);
         }
         break;

      case SwapNode:
         Type1 = Expression(Child(T,1));
         Type2 = Expression(Child(T,2));
         if(Type1 != Type2 || NodeName(Child(T,1)) != IdentifierNode || NodeName(Child(T,2)) != IdentifierNode){
            ErrorHeader(T);
            printf("SWAP TYPES MUST BE IDENTIFIERS\n");
         }else{
            modeAssign(Child(T,1));
            modeAssign(Child(T,2));
            Temp = Lookup("<for_ctxt>",T);
            while(NodeName(Temp) != ProgramNode){
                if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 1), 1))){
                     ErrorHeader(T);
                     printf ("CANNOT SWAP WITH LOOP CONTROL VARIABLE\n");
                     printf ("\n");
               	}
             	Temp = Decoration(Temp);
            }
            Temp = Lookup("<for_ctxt>", T);
            while(NodeName(Temp) != ProgramNode){
                if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 2), 1))){
                     ErrorHeader(T);
                     printf ("CANNOT SWAP WITH LOOP CONTROL VARIABLE\n");
                     printf ("\n");
                }
                Temp = Decoration(Temp);
            }
         }
         break;

      case UptoNode:
         Temp = Lookup("<for_ctxt>",T);
         Decorate(T,Temp);
         OpenScope();
         DTEnter("<for_ctxt>",T);
         DTEnter("<loop_ctxt>",T);
         Type1 = Expression(Child(T,1));
         Type2 = Expression(Child(T,2));
         Type3 = Expression(Child(T,3));
         if(Type1 != Type2 || Type2 != Type3){
            ErrorHeader(T);
            printf("FOR LOOP VARIABLES DO NOT MATCH\n");
         }
         ProcessNode(Child(T,4));
         while(NodeName(Temp) != ProgramNode){
            if(NodeName(Child(Child(Temp,1), 1)) == NodeName(Child(Child(T,1),1)) ){
                ErrorHeader(T);
                printf("ERROR>> CANNOT REUSE FOR-LOOP CONTROL VARIABLE\n");
            }
            Temp = Decoration(Temp);
         }
         CloseScope();
         break;

      case DownToNode:
         Temp = Lookup("<for_ctxt>",T);
         Decorate(T,Temp);
         OpenScope();
         DTEnter("<for_ctxt>",T);
         DTEnter("<loop_ctxt>",T);
         Type1 = Expression(Child(T,1));
         Type2 = Expression(Child(T,2));
         Type3 = Expression(Child(T,3));
         if(Type1 != Type2 || Type2 != Type3){
         	ErrorHeader(T);
            printf("FOR LOOP VARIABLES DO NOT MATCH\n");
         }
         ProcessNode(Child(T,4));
         while(NodeName(Temp) != ProgramNode){
            if(NodeName(Child(Child(Temp,1), 1)) == NodeName(Child(Child(T,1),1)) ){
                ErrorHeader(T);
                printf("ERROR>> CANNOT REUSE FOR-LOOP CONTROL VARIABLE\n");
            }
            Temp = Decoration(Temp);
         }
         CloseScope();
         break;

      case CaseNode:
         Type1 = Expression(Child(T,1));
         for(Kid = 2; Kid <= NKids(T); Kid++){
            if(NodeName(Child(T,Kid)) == CaseClauseNode){
                Type2 = Expression(Child(Child(T,Kid),1));
                if(NodeName(Child(Child(T,Kid),1)) == IdentifierNode){
/*                    ErrorHeader(Child(Child(T,Kid), 1));
                    printf("IDENTIFIER NOT VALID\n"); */
                }
                if(Type1 != Type2){
                    ErrorHeader(Child(Child(T,Kid), 1));
                        printf("IDENTIFIERS TYPES DONT MATCH\n");
                }
                ProcessNode(Child(Child(T,Kid),2));
            }else if(NodeName(Child(T,Kid)) == OtherwiseNode){
                ProcessNode(Child(Child(T,Kid), 1));
            }
         }
         break;

      case ReadNode :	
         for(Kid = 1; Kid <= NKids(T); Kid++){
           Type1 = Expression(Child(T,Kid));
           Temp = Lookup("<for_ctxt>", T);
           while(NodeName(Temp) != ProgramNode){
               if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 1), 1))){
                   ErrorHeader(T);
                   printf ("ERROR>>> read in a for loop\n");
                   printf ("\n");
               }
               Temp = Decoration(Temp);
           }
           if(Type1 != TypeInteger && Type1 != TypeCharacter){
               ErrorHeader(Child(T,Kid));
               printf("Read for unknown type: argument must be integer or char\n\n");
           }
         }
         break;

      case NullNode:
         break;

      default :
         ErrorHeader(T);
         printf ("UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
};  /* end ProcessNode */

/* verificar el modo de un nodo para la asignación de una var */
void modeAssign(TreeNode T){
    TreeNode Declaration, Mode, TempNode;
    Mode = getMode(T);
    if(Mode != DclnNode && Child(TempNode,1) != Decoration(T) ){
        printf("\n");ErrorHeader(T);
        printf ("ERROR>> cannot assign or swap to const, type or lit\n");
    }
}

/* obtener el modo de declaración de identificador */
TreeNode getMode(T){
    TreeNode Dcln, Mode;
    Dcln = Lookup(NodeName(Child(T,1)), T);
    Mode = NodeName(Decoration(Child(Dcln,1)));
    return Mode;
}
