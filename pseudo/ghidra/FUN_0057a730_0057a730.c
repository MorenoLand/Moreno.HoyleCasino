// FUN_0057a730  0057a730

int FUN_0057a730(int param_1,int param_2)

{
  undefined4 in_EAX;
  uint3 uVar2;
  int iVar1;
  
  uVar2 = (uint3)((uint)in_EAX >> 8);
  if ((param_2 == 0x186bf) || (param_2 == 0x186be)) {
    if (param_1 == 0x311e38) {
      *(undefined1 *)(DAT_0162ee84 + 0x25) = 1;
      iVar1 = DAT_0162ee84;
      *(undefined1 *)(DAT_0162ee84 + 0x26) = 0;
      DAT_00793574 = 0;
      iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
    else {
      iVar1 = (uint)uVar2 << 8;
    }
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

