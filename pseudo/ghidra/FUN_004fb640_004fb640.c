// FUN_004fb640  004fb640

void __thiscall FUN_004fb640(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  
  if ((param_2 < 0x186f9) || (0x18702 < param_2)) {
    FUN_005e9f20("false","..\\Casino\\PokerRoom.cpp",0x287);
    local_c = (**(code **)(*DAT_0162ee84 + 0x164))(0);
  }
  else {
    local_c = (**(code **)(*DAT_0162ee84 + 0x164))(param_2 + -0x186f9);
  }
  FUN_005f2c40(param_3);
  FUN_005f2cb0(param_2);
  iVar1 = FUN_006375d0(0xb);
  *(undefined4 *)(iVar1 + 4) = local_c;
  FUN_00637610();
  *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0xcc) = local_c;
  return;
}

