// FUN_005374b0  005374b0

int FUN_005374b0(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_00537260();
  local_8 = 0;
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
  case 0:
    local_8 = iVar1 * 0x14;
    FUN_005de880(0);
    break;
  case 1:
    local_8 = iVar1 * 10;
    FUN_005de880(0);
    break;
  case 2:
    local_8 = iVar1 << 2;
    FUN_005de880(0);
    break;
  case 3:
    FUN_005de880(1);
    local_8 = iVar1;
    break;
  case 4:
    FUN_005de880(5);
    local_8 = iVar1 / 5;
    break;
  case 5:
    FUN_005de880(5);
    local_8 = iVar1 / 10;
    break;
  case 6:
    FUN_005de880(0x19);
    local_8 = iVar1 / 0x19;
    break;
  case 7:
    FUN_005de880(0x19);
    local_8 = iVar1 / 0x32;
    break;
  case 8:
    FUN_005de880(100);
    local_8 = iVar1 / 100;
    break;
  case 9:
    FUN_005de880(100);
    local_8 = iVar1 / 0xfa;
    break;
  case 10:
    FUN_005de880(100);
    local_8 = iVar1 / 500;
    break;
  case 0xb:
    FUN_005de880(100);
    local_8 = iVar1 / 1000;
  }
  return local_8;
}

