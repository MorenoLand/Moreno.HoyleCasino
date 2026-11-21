// FUN_0051f550  0051f550

undefined4 FUN_0051f550(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    switch(param_1) {
    case 0:
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 6;
      break;
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 7;
      break;
    case 4:
      uVar1 = 1;
      break;
    case 5:
      uVar1 = 5;
      break;
    case 6:
      uVar1 = 3;
      break;
    default:
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

