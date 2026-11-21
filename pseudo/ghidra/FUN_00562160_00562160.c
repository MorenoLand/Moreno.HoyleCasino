// FUN_00562160  00562160

void __fastcall FUN_00562160(undefined4 param_1)

{
  char cVar1;
  int local_8;
  
  FUN_00569270(param_1);
  cVar1 = FUN_0055a4e0(*(undefined4 *)(DAT_007947e0 + 0x4f14),DAT_0079343c + 0x24);
  if ((cVar1 != '.') || (cVar1 = FUN_00568890(), cVar1 == '\0')) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(char *)(DAT_00793444 + local_8 + 0x14) != -1) {
        FUN_00568ed0(CONCAT22((short)((uint)(DAT_00793444 + local_8) >> 0x10),
                              *(undefined2 *)
                               (DAT_0079343c + 0x24 + *(char *)(DAT_00793444 + local_8 + 0x14) * 2))
                    );
      }
    }
    FUN_00561f20();
    FUN_0056ace0();
    FUN_005645c0(0);
  }
  return;
}

