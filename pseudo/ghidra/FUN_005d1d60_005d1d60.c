// FUN_005d1d60  005d1d60

void FUN_005d1d60(void)

{
  int *piVar1;
  undefined4 extraout_var;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    piVar1 = (int *)FUN_005fb300(local_8);
    (**(code **)(*piVar1 + 0x74))(piVar1,extraout_var);
  }
  return;
}

