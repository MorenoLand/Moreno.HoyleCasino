// FUN_004639e0  004639e0

int __thiscall FUN_004639e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_004639c0(param_2,5,param_1);
  if (cVar1 != '\0') {
    for (iVar3 = 1; iVar3 < 0xf; iVar3 = iVar3 + 1) {
      iVar2 = FUN_00463a40(param_2,iVar3,param_3);
      if (iVar2 == 2) {
        return iVar3;
      }
    }
  }
  return 0;
}

