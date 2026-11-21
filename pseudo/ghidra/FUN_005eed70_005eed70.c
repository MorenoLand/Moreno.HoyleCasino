// FUN_005eed70  005eed70

char * FUN_005eed70(char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  char *_Format;
  undefined4 uVar2;
  
  strcpy(param_1,param_2);
  if (param_3 != -1) {
    uVar2 = 0x1b;
    _Format = "%c%d";
    sVar1 = strlen(param_1);
    sprintf(param_1 + sVar1,_Format,uVar2,param_3);
  }
  return param_1;
}

