// FUN_00438900  00438900

uint __thiscall FUN_00438900(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00434410();
  if (cVar1 != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0xac4) == 0) {
    uVar2 = FUN_00438870(param_2);
    uVar2 = uVar2 & 0xff;
    if (((uVar2 == 0) && (uVar2 = FUN_00438810(param_2), (uVar2 & 0xff) == 0)) &&
       (uVar2 = FUN_004388d0(param_2), (uVar2 & 0xff) == 0)) {
      uVar2 = FUN_004388a0(param_2);
      uVar2 = uVar2 & 0xff;
      if (uVar2 == 0) goto LAB_00438988;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
LAB_00438988:
    uVar2 = 1;
  }
  return uVar2;
}

