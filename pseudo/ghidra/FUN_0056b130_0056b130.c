// FUN_0056b130  0056b130

void __fastcall FUN_0056b130(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  int local_10;
  int local_8;
  
  FUN_0056ace0();
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    cVar1 = FUN_0056b950(local_8,0);
    if (cVar1 != '\0') {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        *(undefined2 *)(param_1 + 0xf6 + local_8 * 10 + local_10 * 2) = 0;
      }
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 0x3ac + local_8 * 2) != 0) {
      uVar2 = FUN_00561f00(local_8);
      FUN_0056ac70(CONCAT22(extraout_var,uVar2),local_8,1);
    }
  }
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    cVar1 = FUN_0056b950(local_8,0);
    if (cVar1 != '\0') {
      FUN_0056ae50(local_8);
      FUN_0056aed0(local_8);
    }
  }
  FUN_0062fde0("Final Deal\n");
  FUN_0056b260();
  return;
}

