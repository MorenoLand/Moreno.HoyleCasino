// FUN_00484320  00484320

int * __thiscall FUN_00484320(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *local_2c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ffab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(short *)(param_1 + 1) = (short)param_2[1];
  if ((short)param_1[1] == 0) {
    *param_1 = 0;
  }
  else {
    uVar2 = (uint)(short)((short)(((short)param_1[1] + 6) / 7) * 7);
    local_2c = operator_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    local_8 = 0;
    if (local_2c == (uint *)0x0) {
      local_2c = (uint *)0x0;
    }
    else {
      *local_2c = uVar2;
      _eh_vector_constructor_iterator_(local_2c + 1,1,uVar2,FUN_00464110,FUN_00464210);
      local_2c = local_2c + 1;
    }
    local_8 = 0xffffffff;
    *param_1 = (int)local_2c;
    if (*param_1 == 0) {
      FUN_005e9f20("ppcCardsInHand","..\\Casino\\PokerHand.cpp",0x17,uVar1);
    }
    for (local_18 = 0; local_18 < (short)param_1[1]; local_18 = local_18 + 1) {
      *(undefined1 *)(*param_1 + local_18) = *(undefined1 *)(*param_2 + local_18);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

