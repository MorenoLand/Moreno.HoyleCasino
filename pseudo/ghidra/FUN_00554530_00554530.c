// FUN_00554530  00554530

void __fastcall FUN_00554530(int param_1)

{
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_00793420 + 4) < 999999) {
    sprintf(local_10c,"%d",*(int *)(DAT_00793420 + 4));
  }
  else {
    sprintf(local_10c,"******");
  }
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xb4))(local_10c);
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x74))();
  sprintf(local_10c,"%d",*(undefined4 *)(DAT_00793420 + 8));
  (**(code **)(**(int **)(param_1 + 0xb4) + 0xb4))(local_10c);
  (**(code **)(**(int **)(param_1 + 0xb4) + 0x74))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

