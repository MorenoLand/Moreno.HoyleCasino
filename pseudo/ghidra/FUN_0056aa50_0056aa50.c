// FUN_0056aa50  0056aa50

void __fastcall FUN_0056aa50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  int local_8;
  
  uVar2 = FUN_0056b910();
  *(undefined4 *)(*(int *)(DAT_0079343c + 0x34) + 0x2e4) = uVar2;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0x3ac + local_8 * 2) = 0;
  }
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    cVar1 = FUN_0056b950(local_8,0);
    if (cVar1 != '\0') {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        uVar2 = FUN_006436c0();
        FUN_0056b460(local_8,local_10,uVar2);
      }
    }
  }
  FUN_0062fde0("First Deal\n");
  FUN_0056b260();
  return;
}

