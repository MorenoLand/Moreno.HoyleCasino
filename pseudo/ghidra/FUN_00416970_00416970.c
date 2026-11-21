// FUN_00416970  00416970

void __fastcall FUN_00416970(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)FUN_006375d0(0xffffffff);
  FUN_005fb350(0x3b);
  uVar1 = FUN_00600230();
  puVar3[10] = uVar1;
  FUN_005fb350(0x3c);
  uVar1 = FUN_00600230();
  puVar3[0xb] = uVar1;
  FUN_005fb350(0x3d);
  uVar1 = FUN_00600230();
  puVar3[0xc] = uVar1;
  FUN_005fb350(0x3e);
  uVar1 = FUN_00600230();
  puVar3[0xd] = uVar1;
  if (DAT_007947b0 != 0) {
    FUN_005fb350(0x3e);
    cVar2 = FUN_00600230();
    FUN_005cdd10(cVar2 == '\0');
  }
  cVar2 = FUN_005da7b0();
  if (cVar2 == '\0') {
    FUN_005fb5e0(0x32);
    uVar1 = FUN_00605f40();
    *puVar3 = uVar1;
    FUN_005fb5e0(0x33);
    uVar1 = FUN_00605f40();
    puVar3[1] = uVar1;
    FUN_005fb5e0(0x34);
    uVar1 = FUN_00605f40();
    puVar3[9] = uVar1;
    FUN_005fb5e0(0x35);
    uVar1 = FUN_00605f40();
    puVar3[4] = uVar1;
    FUN_005fb5e0(0x36);
    uVar1 = FUN_00605f40();
    puVar3[6] = uVar1;
    FUN_005fb350(0x37);
    uVar1 = FUN_00600230();
    puVar3[7] = uVar1;
    FUN_005fb350(0x38);
    uVar1 = FUN_00600230();
    puVar3[8] = uVar1;
    FUN_005fb350(0x39);
    uVar1 = FUN_00600230();
    puVar3[3] = uVar1;
    FUN_005fb350(0x3a);
    uVar1 = FUN_00600230();
    puVar3[5] = uVar1;
    FUN_005fb860(0);
    uVar1 = FUN_006051d0();
    puVar3[2] = uVar1;
    FUN_00637610();
    cVar2 = (**(code **)(*param_1 + 0x80))();
    if (cVar2 != '\0') {
      FUN_00418d60();
    }
    FUN_0040cc00();
    if ((char)param_1[0x1f] != '\0') {
      *(undefined1 *)(param_1 + 0x1f) = 0;
      FUN_004189a0();
      FUN_004123c0();
    }
  }
  else {
    FUN_0040cc00();
  }
  return;
}

