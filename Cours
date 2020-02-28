ATI01
==

# Algo avancés
## I / Rappels de cours
* char (entier sur 1 octet)
* int (entier signé)
* float (nombre à virgule flottante) : IEEE754
* double (nombre à virgule flottante double précision) : IEEE754
* void

**char**
1 octet : 1 bit (signe), 7 bits (valeur)
[ - 127 ; + 127 ]

size (int) => size (char)

**signed/unsigned**
Exemple : unsigned char : 8 bits de valeur [ 0 ; 255 ]

**short/long**

~void main() {~
int main() {
voir int main(int argc, char** argv, char** ...)

Pas de main = pas d'exécutable

### Fonctions
```
<type-retour> nom (<type 1> <arg 1>, ...){

}
```

<type-retour> en void si on a pas de résultat à afficher

return <valeur> quand la fonction est terminée

**Variable locale** : variable définie dans une fonction, ne sera alors connue que dans la fonction
**Variable globale** : tout en haut du code, en dehors des fonctions (très déconseillées)

Pas de fonction dans une fonction 

### Structures de contrôle
* if
* for
* while
* do while
* switch case

**IF**
```
if (expression)
	{bloc} ou instruction;
else
	{bloc} ou instruction; 
```

**FOR**
```
for (expression 1; expression 2; expression 3)
	{bloc} ou instruction;
```

exécute expression 1
teste expression 2
si vraie -> exécute bloc ou instruction
	exécute expression 3
si fausse -> continue

Exemple :
```
for (i=0; i<10; i=i+1)
	printf("coucou \n");
```

Utiliser for quand on veut contrôler le nombre de boucles

**WHILE**
```
while (expression)
	{bloc} ou instruction;
```

Si expression fausse on exécute pas

**WHILE DO**
```
do
	{bloc} ou instruction;
while (expression);
```

On exécute, après on teste si l'expression est vraie ou fausse

**SWITCH CASE**
```
switch (expression){
case <valeur> : instruction
		instruction
		instruction
		break;
case <valeur> : instruction
		instruction
		instruction
		break;
default : instruction
	  instruction
	  instruction
	  break;
}
```

<valeur> doit absolument être un nombre

### Opérateurs
* Affectation : = ("reçoit la valeur")
<variable> = <expression>

```
float A;
int B;
float C; // avoir le résultat en float

B=17;
A=3.4;

C=A+B;
```

C = A << 1; (décalage à gauche de 1 bit) revient à multiplier par deux

OU : B || C
ET : B && C

ET bit à bit (bitwise) : C = A & B;
OU bit à bit (bitwise) : C = A | B;

i=i+2; <=> i+=2;
i=i-3; <=> i-=3;
i=i*4; <=> i*=4;
i=i/5; <=> i/=5;

i++; <=> i=i+1;
i--; <=> i=i-1;

i++ i avant incrémentation
++i i après incrémentation

### Tableaux
Connaître sa taille

```int classe [16];```
<type> <nom> <[taille]>
On crée un tableau de 16 cases, chaque case pouvant contenir 1 int 


```int damier [10][10];```
On crée un tableau de 10 par 10

Ces tableaux ne sont pas stockés en RAM mais en STACK. Donc on peut pas faire des tableaux tros gros sinon 'stack overflow'.

```
int main () {
	int B;
	B=42;
	RAZ(B); // RAZ(42)
	printf("%d \n",B);
	return 0;
void RAZ (int V) {
	V=0;
	// variable locale détruite
}
}
```

Problème : B vaudra toujours 42 dans ce cas là.
Donc on va utiliser un pointeur. 

## Opérateur "donne-moi l'adresse"
int A; 
valeur : A -> 7
adresse : &A -> c4f0

int* B;
B=&A;
*B=14;

int** C;
C=&B;
**C=42;

int main () {
        int B;
        B=42;
        RAZ(*B);
        printf("%d \n",B);
        return 0;
void RAZ (int* V) {
        *V=0;
}
}
