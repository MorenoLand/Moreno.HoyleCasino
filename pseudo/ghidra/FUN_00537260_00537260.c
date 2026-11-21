// FUN_00537260  00537260

undefined * FUN_00537260(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *local_10;
  
  local_10 = (undefined *)0x1388;
  iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
  iVar2 = *(int *)(DAT_007947e0 + 0x4f10);
  switch(iVar2) {
  case 0:
  case 1:
  case 2:
    local_10 = *(undefined **)(DAT_007947e0 + 0x4ed0);
    break;
  case 3:
    local_10 = *(undefined **)(DAT_007947e0 + 0x4ed4);
    break;
  case 4:
  case 5:
    local_10 = *(undefined **)(DAT_007947e0 + 0x4ed8);
    break;
  case 6:
  case 7:
    local_10 = *(undefined **)(DAT_007947e0 + 0x4edc);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    local_10 = *(undefined **)(DAT_007947e0 + 0x4ee0);
  }
  cVar3 = FUN_00538490();
  if (cVar3 != '\0') {
    if (iVar1 == 0x15) {
      if (iVar2 == 10) {
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 500000);
      }
      else if (iVar2 == 0xb) {
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 1500000);
      }
    }
    else if (iVar1 == 0x19) {
      switch(iVar2) {
      case 8:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 500000);
        break;
      case 9:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 2000000);
        break;
      case 10:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 5000000);
        break;
      case 0xb:
        local_10 = &DAT_00b71b00 + *(int *)(DAT_007947e0 + 0x4ee0);
      }
    }
    else if (iVar1 == 0x1d) {
      switch(iVar2) {
      case 8:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 600000);
        break;
      case 9:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 1700000);
        break;
      case 10:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 3500000);
        break;
      case 0xb:
        local_10 = (undefined *)(*(int *)(DAT_007947e0 + 0x4ee0) + 6500000);
      }
    }
  }
  return local_10;
}

