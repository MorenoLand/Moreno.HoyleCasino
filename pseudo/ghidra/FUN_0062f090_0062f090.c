// FUN_0062f090  0062f090

int __thiscall FUN_0062f090(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 == 0x5c) {
    param_2 = FUN_0062ee80(param_1);
    iVar1 = islower(param_2);
    if ((iVar1 != 0) && (pcVar2 = strchr(&DAT_007620b4,param_2), pcVar2 != (char *)0x0)) {
      pcVar2 = strchr(&DAT_007620b4,param_2);
      param_2 = (int)pcVar2[1];
    }
  }
  return param_2;
}

