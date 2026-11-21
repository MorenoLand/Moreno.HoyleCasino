// FUN_006287c0  006287c0

void __fastcall FUN_006287c0(int *param_1)

{
  int iVar1;
  undefined1 extraout_var;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_8;
  
  FUN_006150e0();
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xbc))();
    if (iVar1 <= local_8) break;
    uVar3 = CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    uVar2 = 0xffffffff;
    iVar1 = param_1[0x2c];
    FUN_0060ca40(local_8);
    FUN_005ecd00(iVar1,uVar2,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

