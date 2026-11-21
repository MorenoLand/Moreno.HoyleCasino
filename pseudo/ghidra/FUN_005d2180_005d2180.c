// FUN_005d2180  005d2180

void FUN_005d2180(int param_1)

{
  int *piVar1;
  undefined4 local_28 [9];
  
  local_28[0] = 3;
  local_28[1] = 7;
  local_28[2] = 5;
  local_28[3] = 6;
  local_28[4] = 4;
  local_28[5] = 2;
  local_28[6] = 8;
  local_28[7] = 1;
  local_28[8] = 0;
  piVar1 = (int *)FUN_005fb2b0(3);
  (**(code **)(*piVar1 + 0xb0))(local_28[param_1]);
  piVar1 = (int *)FUN_005fb2b0(3);
  (**(code **)(*piVar1 + 0x74))();
  return;
}

