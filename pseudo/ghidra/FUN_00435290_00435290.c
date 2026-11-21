// FUN_00435290  00435290

undefined4 __thiscall FUN_00435290(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00434820(param_2);
  cVar1 = FUN_00435c60(uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_004353e0(param_2);
  }
  else {
    cVar1 = FUN_005cb920();
    if ((cVar1 != '\0') && (iVar3 = FUN_005cb820(*(undefined4 *)(param_1 + 0xad8)), iVar3 == 0)) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

