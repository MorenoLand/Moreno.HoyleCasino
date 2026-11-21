// FUN_00456020  00456020

undefined4 __thiscall FUN_00456020(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  if (*(char *)(param_1 + 0x2c2) == '\0') {
    FUN_004512c0(&local_c,&local_8);
  }
  else {
    FUN_004516a0(&local_c,&local_8);
  }
  FUN_0044f840(local_c,local_8,param_2,param_3);
  iVar1 = FUN_0044f680(CONCAT22(extraout_var_00,*param_2));
  iVar2 = FUN_0044f680(CONCAT22(extraout_var,*param_3));
  if (iVar1 == iVar2) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_0044f680(*param_2);
    if (iVar1 != 0xe) {
      FUN_005e9f20("GetRank(*low1) == 14","..\\Casino\\paigowai.cpp",0xdf8);
    }
    uVar3 = 1;
  }
  return uVar3;
}

