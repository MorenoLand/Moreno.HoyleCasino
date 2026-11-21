// FUN_00554f60  00554f60

void __fastcall FUN_00554f60(int *param_1)

{
  char cVar1;
  int local_8;
  
  FUN_00557dc0();
  cVar1 = FUN_0054d6a0(*(undefined4 *)(DAT_007947e0 + 0x4f14),DAT_00793420 + 0x22);
  if ((cVar1 != '.') || (cVar1 = FUN_005573f0(), cVar1 == '\0')) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(char *)(DAT_00793428 + local_8 + 0x14) != -1) {
        FUN_00557a30(CONCAT22((short)((uint)(DAT_00793428 + local_8) >> 0x10),
                              *(undefined2 *)
                               (DAT_00793420 + 0x22 + *(char *)(DAT_00793428 + local_8 + 0x14) * 2))
                    );
      }
    }
    (**(code **)(*param_1 + 4))();
  }
  return;
}

