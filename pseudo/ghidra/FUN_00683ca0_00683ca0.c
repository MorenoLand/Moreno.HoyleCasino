// FUN_00683ca0  00683ca0

uint __fastcall FUN_00683ca0(uint *param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = ~in_EAX;
  for (; (param_2 != 0 && (((uint)param_1 & 3) != 0)); param_1 = (uint *)((int)param_1 + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_006e2f90 + (((byte)*param_1 ^ uVar1) & 0xff) * 4);
    param_2 = param_2 - 1;
  }
  if (0x1f < param_2) {
    uVar3 = param_2 >> 5;
    puVar2 = param_1;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[5];
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[6];
      param_1 = puVar2 + 8;
      param_2 = param_2 - 0x20;
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar2 = param_1;
    } while (uVar3 != 0);
  }
  if (3 < param_2) {
    uVar3 = param_2 >> 2;
    do {
      uVar1 = uVar1 ^ *param_1;
      param_1 = param_1 + 1;
      uVar1 = *(uint *)(&DAT_006e3390 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_006e3790 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_006e2f90 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_006e3b90 + (uVar1 & 0xff) * 4);
      param_2 = param_2 - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_006e2f90 + (((byte)*param_1 ^ uVar1) & 0xff) * 4);
    param_1 = (uint *)((int)param_1 + 1);
  }
  return ~uVar1;
}

