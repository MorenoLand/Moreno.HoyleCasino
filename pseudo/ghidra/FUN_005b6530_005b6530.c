// FUN_005b6530  005b6530

undefined4 FUN_005b6530(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  iVar2 = FUN_005b4f50(4,0);
  if (0x11 < iVar2) {
    return 1;
  }
  uVar3 = extraout_var;
  iVar2 = FUN_005b4f50(4,0);
  if ((iVar2 != 0x11) ||
     ((iVar2 = FUN_005b5260(4,0), iVar2 != 0x11 && (cVar1 = FUN_005b3dc0(uVar3), cVar1 != '\0')))) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      for (local_c = 0; iVar2 = FUN_005b58f0(local_8), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_005b5010(local_8,local_c);
        if (iVar2 == -1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

