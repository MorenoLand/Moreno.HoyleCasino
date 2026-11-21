// FUN_00688de0  00688de0

void __thiscall
FUN_00688de0(int param_1,char *param_2,char *param_3,undefined1 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  size_t local_c;
  
  if (((((*(char *)(param_1 + 0x107) != '\0') && (param_2 != (char *)0x0)) && (*param_2 != '\0')) &&
      ((param_4 != (undefined1 *)0x0 && (param_5 != 0)))) &&
     ((iVar2 = (**(code **)(**(int **)(param_1 + 0x208) + 4))(), iVar2 == 0 ||
      ((cVar1 = FUN_00688f10(param_1 + 0x107,0), cVar1 == '\0' ||
       (cVar1 = FUN_006892b0(param_2,param_4,param_5), cVar1 == '\0')))))) {
    if (param_3 == (char *)0x0) {
      *param_4 = 0;
    }
    else {
      sVar3 = strlen(param_3);
      if (sVar3 + 1 < param_5 - 1U) {
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

