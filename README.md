# La funcion calada #

Se tiene el siguiente plantamiento:

###Convertir un array de *intergers* a uno de *chars*###

Entrada:
```c
unsigned short input[] = {48, 49, 50};
```

Salida:
```c
unsigned char output[] = {48, 49, 50};
```

####Cual es la diferencia?####
La representación interna del tipo de dato. Para un short o int ocupan entre 2 a 4 bytes, mientras que un char usa 1 byte.


El primer enfoque fue hacer un cast directo,

```c
  output = (unsigned char *)input;
```

Pero lo anterior hace un cast hacia un puntero de char pero no hace el cast de cada elemento.

Asi que, el segundo enfoque es iterar sobre el arreglo y hacer el cast para cada uno:

```c
var i;
for(i = 0; i < inputSize; i++){
  output[i] = (unsigned char *)input[i];
}
```

