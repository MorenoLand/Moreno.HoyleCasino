// FUN_00689e40  00689e40

DWORD FUN_00689e40(void)

{
  DWORD DVar1;
  
  timeBeginPeriod(DAT_01631bcc);
  DVar1 = timeGetTime();
  timeEndPeriod(DAT_01631bcc);
  return DVar1;
}

