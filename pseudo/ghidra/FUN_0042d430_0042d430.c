// FUN_0042d430  0042d430

void __fastcall FUN_0042d430(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  FUN_005f5cf0();
  cVar1 = FUN_005f54c0();
  if ((((cVar1 == '\0') && (param_1[0x61] != 0)) &&
      (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 == '\0')) &&
     ((((char)param_1[99] == '\0' && (*(char *)(DAT_0162ee84 + 0x25) == '\0')) &&
      (DVar2 = GetTickCount(), 999 < DVar2 - param_1[0x62])))) {
    param_1[0x61] = param_1[0x61] + -1;
    FUN_0062fde0("Seconds until warning: %d\n",param_1[0x61]);
    param_1[0x62] = DVar2;
    if (param_1[0x61] == 0) {
      *(undefined1 *)(param_1 + 99) = 1;
      uVar3 = FUN_00630f40("SID_CRAPS_ROLLDICE_TITLE",0);
      uVar3 = FUN_00630f40("SID_CRAPS_ROLLDICE_MESSAGE",uVar3);
      FUN_0062ff10(uVar3);
    }
  }
  return;
}

