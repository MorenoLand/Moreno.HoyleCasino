// FUN_0062fe60  0062fe60

void FUN_0062fe60(LPCSTR param_1)

{
  OutputDebugStringA(param_1);
  if (((DAT_0162ee6d == '\0') && (DAT_007960d8 != 0)) && (*(int *)(DAT_007960d8 + 0x14) != 0)) {
    DAT_0162ee6c = FUN_00607900("DebugStringToFile",0);
    DAT_0162ee6d = '\x01';
  }
  if (DAT_0162ee6c != '\0') {
    if (DAT_0162ee68 == 0) {
      DAT_0162ee68 = FUN_005ea9c0("DEBUGLOG.TXT",&DAT_006d9d38);
    }
    if (DAT_0162ee68 != 0) {
      fputs(param_1,(FILE *)DAT_0162ee68);
      fflush((FILE *)DAT_0162ee68);
    }
  }
  return;
}

