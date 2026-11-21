// FUN_005eacd0  005eacd0

void __fastcall FUN_005eacd0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x5d] != 0) {
    FUN_006041d0(param_1[0x5d]);
  }
  param_1[0x5d] = 0;
  if ((param_1[0x13] == 0) &&
     (iVar1 = strcmp((char *)(param_1 + 0x14),(char *)&PTR_006b27f8), iVar1 == 0)) {
    return;
  }
  if (param_1[0x13] == 0) {
    iVar1 = FUN_00603fb0(0x20584554,param_1 + 0x14);
    param_1[0x5d] = iVar1;
  }
  else {
    iVar1 = FUN_00603c50(0x20584554,param_1[0x13],0);
    param_1[0x5d] = iVar1;
  }
  if (param_1[0x5d] != 0) {
    iVar1 = FUN_006163c0();
    param_1[0x5a] = iVar1 + -1;
    iVar1 = FUN_006163e0(0);
    param_1[0x58] = iVar1 + -1;
  }
  iVar1 = FUN_005eb240();
  if (iVar1 < param_1[0x57]) {
    iVar1 = FUN_005eb240();
    param_1[0x57] = iVar1;
  }
  if (param_1[0x57] < 0) {
    param_1[0x57] = 0;
  }
  iVar1 = FUN_005eb130();
  if (iVar1 < param_1[0x59]) {
    iVar1 = FUN_005eb130();
    param_1[0x59] = iVar1;
  }
  if (param_1[0x59] < 0) {
    param_1[0x59] = 0;
  }
  (**(code **)(*param_1 + 0xac))();
  uVar2 = (**(code **)(*param_1 + 0x54))();
  uVar2 = (**(code **)(*param_1 + 0x4c))(uVar2);
  (**(code **)(*param_1 + 0x44))(uVar2);
  (**(code **)(*param_1 + 0xac))();
  return;
}

