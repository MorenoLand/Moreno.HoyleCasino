// FUN_00564b10  00564b10

void __fastcall FUN_00564b10(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  int local_8;
  
  if (*(int *)(DAT_0079343c + 0x14) < 1) {
    for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
      *(undefined4 *)(param_1 + 0x6bc + local_8 * 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x780 + local_8 * 4) = 0;
    }
  }
  else {
    for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
      if (*(char *)(param_1 + local_8 + 0x564) != '\0') {
        uVar1 = FUN_0056b710(local_8,&local_c);
        *(undefined4 *)(param_1 + 0x780 + local_8 * 4) = uVar1;
        *(undefined4 *)(param_1 + 0x6bc + local_8 * 4) = local_c;
      }
    }
  }
  return;
}

