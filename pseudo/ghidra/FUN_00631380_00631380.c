// FUN_00631380  00631380

int FUN_00631380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_30[0] = param_1;
  local_30[1] = param_2;
  local_30[2] = param_3;
  local_30[3] = param_4;
  local_20 = param_5;
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_8;
  local_10 = param_9;
  local_c = param_10;
  for (local_8 = 0; (local_8 < 10 && (local_30[local_8] != -1)); local_8 = local_8 + 1) {
  }
  if (local_8 == 0) {
    FUN_005e9f20(&DAT_006d9e34,"..\\casinoShell\\util.cpp",0x319);
  }
  iVar1 = FUN_0062fbf0(local_8);
  return local_30[iVar1];
}

