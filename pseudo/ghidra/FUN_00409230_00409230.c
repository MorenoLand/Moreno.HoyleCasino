// FUN_00409230  00409230

bool FUN_00409230(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bStack_24;
  bool bStack_20;
  bool bStack_1c;
  
  iVar2 = FUN_004091d0();
  FUN_004091b0();
  iVar3 = FUN_00408fd0(0);
  cVar1 = FUN_00409120();
  if (cVar1 == '\0') {
    if (iVar2 < 8) {
      cVar1 = FUN_00409360(6,7);
      if (cVar1 == '\0') {
        switch(iVar2) {
        case 0:
        case 1:
        case 2:
          bStack_24 = true;
          break;
        case 3:
          bStack_24 = iVar3 != 8;
          break;
        case 4:
          if ((iVar3 < 2) || (7 < iVar3)) {
            bStack_1c = false;
            bStack_24 = bStack_1c;
          }
          else {
            bStack_1c = true;
            bStack_24 = bStack_1c;
          }
          break;
        case 5:
          if ((iVar3 < 4) || (7 < iVar3)) {
            bStack_20 = false;
            bStack_24 = bStack_20;
          }
          else {
            bStack_20 = true;
            bStack_24 = bStack_20;
          }
          break;
        case 6:
          if ((iVar3 == 6) || (iVar3 == 7)) {
            bStack_24 = true;
          }
          else {
            bStack_24 = false;
          }
          break;
        case 7:
          bStack_24 = false;
          break;
        default:
          bStack_24 = false;
        }
      }
      else {
        bStack_24 = iVar2 < 6;
      }
    }
    else {
      bStack_24 = false;
    }
  }
  else {
    bStack_24 = false;
  }
  return bStack_24;
}

