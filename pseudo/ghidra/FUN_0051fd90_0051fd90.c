// FUN_0051fd90  0051fd90

void FUN_0051fd90(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0x10;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      cVar2 = FUN_00520770(local_10,local_14);
      if (cVar2 != '\0') {
        iVar1 = local_14 + local_10 * 4;
        iVar3 = FUN_0051f660(local_10);
        if (iVar3 == 5) {
          FUN_005f9ce0(0,local_c,*(undefined4 *)(&DAT_00721b78 + iVar1 * 4),0,0,5,0,0xff,0);
          local_c = local_c + 1;
        }
        else {
          FUN_005f9ce0(0,local_c,*(undefined4 *)(&DAT_00721af8 + iVar1 * 4),0,0,5,0,0xff,0);
          local_c = local_c + 1;
        }
      }
    }
  }
  return;
}

