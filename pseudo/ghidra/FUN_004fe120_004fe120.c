// FUN_004fe120  004fe120

undefined4 FUN_004fe120(int param_1)

{
  undefined4 uVar1;
  undefined1 local_c;
  
  if ((param_1 < 0x30e796) || (0x30e799 < param_1)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  *(undefined1 *)(DAT_007947e0 + 0x4f34) = local_c;
  switch(param_1) {
  case 0x30e792:
  case 0x30e796:
    uVar1 = 5;
    break;
  case 0x30e793:
  case 0x30e797:
    uVar1 = 0x19;
    break;
  case 0x30e794:
  case 0x30e798:
    uVar1 = 0xfa;
    break;
  case 0x30e795:
  case 0x30e799:
    uVar1 = 1000;
    break;
  default:
    uVar1 = 5;
  }
  return uVar1;
}

