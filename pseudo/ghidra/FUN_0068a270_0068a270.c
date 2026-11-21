// FUN_0068a270  0068a270

void __thiscall
FUN_0068a270(int param_1,char *param_2,char *param_3,undefined1 *param_4,int param_5)

{
  char cVar1;
  size_t sVar2;
  size_t local_c;
  
  if (((((*(char *)(param_1 + 0x107) != '\0') && (param_2 != (char *)0x0)) && (*param_2 != '\0')) &&
      ((param_4 != (undefined1 *)0x0 && (param_5 != 0)))) &&
     ((*(int *)(param_1 + 0x208) == 0 ||
      ((cVar1 = FUN_0068a710(param_1 + 0x107,0), cVar1 == '\0' ||
       (cVar1 = FUN_0068a940(param_2,param_4,param_5), cVar1 == '\0')))))) {
    if (param_3 == (char *)0x0) {
      *param_4 = 0;
    }
    else {
      sVar2 = strlen(param_3);
      if (sVar2 + 1 < param_5 - 1U) {
        local_c = strlen(param_3);
        local_c = local_c + 1;
      }
      else {
        local_c = param_5 - 1;
      }
      memmove(param_4,param_3,local_c);
      param_4[param_5 + -1] = 0;
    }
  }
  return;
}

