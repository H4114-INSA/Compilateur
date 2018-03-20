grammar Expr;
prog: definitionFonction+ ;

expr:
      '(' expr ')'    # par
|  expr '%' expr      # mod
|  expr '*' expr      # mult
|  expr '/' expr      # div
|  expr '+' expr      # add
|  expr '-' expr      # moins
|  expr '<<' expr     # leftShift
|  expr '>>' expr     # rightShift
|  expr '&&' expr     # et
|  expr '||' expr     # ou
|  expr '<=' expr     # infEgal
|  expr '>=' expr     # supEgal
|  expr '>' expr      # strictSup
|  expr '<' expr      # strictInf
|  expr '==' expr     # egal
|  expr '!=' expr     # diff
|  '!'expr            # non
|  expr '&' expr      # and
|  expr '|' expr      # or
|  expr '^' expr      # xor
|  expr '~' expr      # not
|  expr ',' expr      # comma
|  '~' expr           # notExpr
|  Nom '[' expr ']'   # getTabVal
|  Nom                # getVarVal
|  IntVal             # intVal
|  CharVal            # charVal
|  Nom '(' (declaration (',' declaration)*) ')'    # appelFonction
|  aff                # affectation
;

type : Char           # char
| Int32_t             # int32_t
| Int64_t             # int64_t
;

aff : Nom '=' expr           # affExpr
| Nom '[' expr ']' '=' expr  # affExprTableau
| Nom '++'                   # postIncrement
| '++' Nom                   # preIncrement
| Nom '--'                   # postDecrement
| '--' Nom                   # preDecrement
| '-'  Nom                   # oppose
| Nom '+=' expr              # plusEgal
| Nom '-=' expr              # moinsEgal
| Nom '*=' expr              # multEgal
| Nom '/=' expr              # divEgal
| Nom '%=' expr              # modEgal
| Nom '&=' expr              # andEgal
| Nom '|=' expr              # orEgal
| Nom '^=' expr              # xorEgal
;

control : If '(' expr ')' blocControl (Elseif '(' expr ')' blocControl)* (Else blocControl)? # if
| While '(' expr ')' blocControl                                                             # while
;

blocControl : '{' (instr)* '}'     # bloc
| instr                            # instruction
;

declaration : type Nom '[' (expr)? ']' ('=' '{' expr (',' expr )*  '}' )?  # decTableau
| type Nom ('=' expr)?                                                     # decVariable
| type Nom ( ',' Nom)*                                                     # decVariableMultiple
;

instr : declaration ';'       # instrDecl
| Putchar '(' CharVal ')' ';' # instrPutchar
| Getchar '(' CharVal ')' ';' # instrGetchar
| Break ';'                   # break
| Return expr ';'             # return
| expr  ';'                   # instrExpr
| control                     # controle
;

definitionFonction : type Nom '(' (declaration (',' declaration)*) ')' '{' (instr )* '}'  # defFonctionType
| Void Nom '(' (declaration (',' declaration)*) ')' '{' (instr )* '}'                    # defFonctionVoid
;


Include     : '#include' (' ')* ('<'[a-zA-Z]+('.h')?'>'|'"'[a-zA-Z]+('.h')?'"') -> skip;
Char        : 'char' ;
Int32_t     : 'int32_t' ;
Int64_t     : 'int64_t' ;
Break       : 'break' ;
Return      : 'return' ;
While       : 'while' ;
If          : 'if' ;
Else        : 'else' ;
Elseif      : 'elseif' ;
Void        : 'void' ;
Putchar     : 'putchar' ;
Getchar     : 'getchar' ;
Nom         : [a-zA-Z]+[a-zA-Z_0-9]* ;
IntVal      : [0-9]+ ;
CharVal     : '\''('\\')*[a-zA-Z0-9]+'\'' ;
WS          : [ \t\n\r]+ -> skip ;


