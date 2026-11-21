// FUN_00637260  00637260

undefined4 FUN_00637260(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3f4:
    uVar1 = *(undefined4 *)(&DAT_00770cb8 + param_2 * 0x30);
    break;
  default:
    uVar1 = 0xffffffff;
    break;
  case 0x3f6:
    uVar1 = *(undefined4 *)(&DAT_00770cbc + param_2 * 0x30);
    break;
  case 0x402:
    uVar1 = *(undefined4 *)(&DAT_00770cb4 + param_2 * 0x30);
    break;
  case 0x404:
    uVar1 = *(undefined4 *)(&DAT_00770cb0 + param_2 * 0x30);
    break;
  case 0x416:
    uVar1 = *(undefined4 *)(&DAT_00770ccc + param_2 * 0x30);
    break;
  case 0x427:
    uVar1 = *(undefined4 *)(&DAT_00770cc8 + param_2 * 0x30);
    break;
  case 0x448:
    uVar1 = *(undefined4 *)(&DAT_00770cc0 + param_2 * 0x30);
    break;
  case 0x468:
    uVar1 = *(undefined4 *)(&DAT_00770cc4 + param_2 * 0x30);
    break;
  case 0x4a1:
    uVar1 = *(undefined4 *)(&DAT_00770cd8 + param_2 * 0x30);
    break;
  case 0x4a2:
    uVar1 = *(undefined4 *)(&DAT_00770cdc + param_2 * 0x30);
  }
  return uVar1;
}

