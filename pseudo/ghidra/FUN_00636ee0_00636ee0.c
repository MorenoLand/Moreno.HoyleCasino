// FUN_00636ee0  00636ee0

void FUN_00636ee0(void)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) break;
    cVar1 = FUN_0063b380();
    if (cVar1 != '\0') {
      FUN_00648270(0);
      FUN_006464d0(0,0);
    }
    local_8 = local_8 + 1;
  }
  return;
}

