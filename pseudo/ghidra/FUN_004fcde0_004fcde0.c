// FUN_004fcde0  004fcde0

undefined4 * FUN_004fcde0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 extraout_var;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005d5a90(&local_c);
  cVar1 = FUN_005da7b0(extraout_var);
  if (cVar1 != '\0') {
    local_c = *(undefined4 *)(param_2 + 0x4b4);
    local_8 = *(undefined4 *)(param_2 + 0x4b8);
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

