// FUN_00621ce0  00621ce0

int FUN_00621ce0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_20;
  int local_10;
  
  while( true ) {
    if (param_4 <= param_3) {
      return param_3;
    }
    if (param_3 * 2 - param_4 == 0 || param_3 * 2 < param_4) {
      local_20 = (int *)FUN_00621ec0(param_2,param_3);
    }
    else {
      local_20 = (int *)FUN_00621f30(param_2,param_3);
    }
    if (local_20 == (int *)0x0) break;
    piVar2 = (int *)(param_3 * 0x20 + param_2);
    piVar2[1] = local_20[1];
    piVar2[3] = local_20[3];
    piVar2[5] = local_20[5];
    *piVar2 = *local_20;
    piVar2[2] = local_20[2];
    piVar2[4] = local_20[4];
    iVar3 = (local_20[1] - *local_20) * 0x78;
    iVar4 = (local_20[3] - local_20[2]) * 0xec;
    local_10 = iVar4;
    if (iVar4 < iVar3) {
      local_10 = iVar3;
    }
    cVar1 = iVar4 >= iVar3;
    if (local_10 < (local_20[5] - local_20[4]) * 0x58) {
      cVar1 = '\x02';
    }
    if (cVar1 == '\0') {
      iVar3 = (local_20[1] + *local_20) / 2;
      local_20[1] = iVar3;
      *piVar2 = iVar3 + 1;
    }
    else if (cVar1 == '\x01') {
      iVar3 = (local_20[3] + local_20[2]) / 2;
      local_20[3] = iVar3;
      piVar2[2] = iVar3 + 1;
    }
    else if (cVar1 == '\x02') {
      iVar3 = (local_20[5] + local_20[4]) / 2;
      local_20[5] = iVar3;
      piVar2[4] = iVar3 + 1;
    }
    FUN_006217b0(param_1,local_20);
    FUN_006217b0(param_1,piVar2);
    param_3 = param_3 + 1;
  }
  return param_3;
}

