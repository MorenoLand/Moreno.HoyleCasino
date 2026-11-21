// FUN_00694f20  00694f20

uint FUN_00694f20(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 0x10 ^ param_1 << 0x10;
  uVar2 = uVar1 << 8;
  uVar2 = (uVar1 >> 8 ^ uVar2) & 0xff00ff ^ uVar2;
  uVar3 = uVar2 << 4;
  uVar3 = (uVar2 >> 4 ^ uVar3) & 0xf0f0f0f ^ uVar3;
  uVar1 = uVar3 * 4;
  uVar1 = (uVar3 >> 2 ^ uVar1) & 0x33333333 ^ uVar1;
  uVar2 = uVar1 * 2;
  return (uVar1 >> 1 ^ uVar2) & 0x55555555 ^ uVar2;
}

