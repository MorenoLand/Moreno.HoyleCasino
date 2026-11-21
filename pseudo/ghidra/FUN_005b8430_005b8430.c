// FUN_005b8430  005b8430

void FUN_005b8430(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_30 [11];
  
  local_30[0] = 5;
  local_30[1] = 5;
  local_30[2] = 6;
  local_30[3] = 5;
  local_30[4] = 2;
  local_30[5] = 5;
  local_30[6] = 3;
  local_30[7] = 1;
  local_30[8] = 2;
  local_30[9] = 4;
  local_30[10] = 6;
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    iVar2 = FUN_005b58a0();
    iVar3 = FUN_005b5fb0(0xffffffff);
    if (iVar2 != local_30[*(char *)(iVar3 + 9) + 7]) {
      iVar2 = FUN_005b5fb0(0xffffffff);
      FUN_00642e70(local_30[local_30[*(char *)(iVar2 + 9) + 7]]);
      FUN_005b7ef0();
    }
  }
  return;
}

