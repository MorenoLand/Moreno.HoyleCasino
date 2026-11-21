// FUN_00667ac0  00667ac0

undefined4 FUN_00667ac0(undefined4 *param_1,char *param_2)

{
  char *_Str;
  char *pcVar1;
  undefined4 uVar2;
  
  *param_2 = '\0';
  _Str = (char *)*param_1;
  pcVar1 = strchr(_Str,0x2b);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strchr(_Str,0x2e);
  }
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    strncpy(param_2,_Str,(int)pcVar1 - (int)_Str);
    param_2[(int)pcVar1 - (int)_Str] = '\0';
    for (; *param_2 != '\0'; param_2 = param_2 + 1) {
      if ((*param_2 == ' ') || (*param_2 == '-')) {
        *param_2 = '_';
      }
    }
    *param_1 = pcVar1 + 1;
    uVar2 = CONCAT31((int3)((uint)(pcVar1 + 1) >> 8),1);
  }
  return uVar2;
}

