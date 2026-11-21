// FUN_00545ff0  00545ff0

void __fastcall FUN_00545ff0(int *param_1)

{
  int iVar1;
  undefined2 extraout_var;
  int local_28;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  iVar1 = FUN_00641280((short)param_1[100]);
  if (iVar1 == 0xe) {
    local_28 = 1;
  }
  else {
    local_28 = FUN_00641280((short)param_1[100]);
  }
  iVar1 = FUN_00641290((short)param_1[100]);
  (**(code **)(*param_1 + 0xb0))(local_18[iVar1] * 0xd + -1 + local_28);
  iVar1 = FUN_00641280(CONCAT22(extraout_var,(short)param_1[100]));
  if (iVar1 == 0xf) {
    (**(code **)(*param_1 + 0xb0))(0x34);
  }
  if ((char)param_1[0x69] == '\0') {
    (**(code **)(*param_1 + 0xb0))(0x35);
  }
  FUN_005eb570();
  return;
}

