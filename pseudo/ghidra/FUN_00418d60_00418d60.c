// FUN_00418d60  00418d60

void FUN_00418d60(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_30 [11];
  
  local_30[7] = 1;
  local_30[8] = 2;
  local_30[9] = 4;
  local_30[10] = 6;
  local_30[0] = 5;
  local_30[1] = 5;
  local_30[2] = 6;
  local_30[3] = 5;
  local_30[4] = 2;
  local_30[5] = 5;
  local_30[6] = 3;
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    iVar2 = FUN_00418700();
    iVar3 = FUN_00418400(0xffffffff);
    if (iVar2 != local_30[*(char *)(iVar3 + 1) + 7]) {
      iVar2 = FUN_00418400(0xffffffff);
      FUN_00642e70(local_30[local_30[*(char *)(iVar2 + 1) + 7]]);
      FUN_00418ed0();
    }
  }
  return;
}

