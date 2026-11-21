// FUN_00530270  00530270

void FUN_00530270(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_var;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar2 = FUN_005fc360();
  switch(uVar2) {
  case 0:
    piVar4 = extraout_var;
    cVar1 = FUN_00637630();
    if ((cVar1 == '\0') || (iVar3 = FUN_00637810(0), iVar3 == 0)) {
      (**(code **)(*piVar4 + 8))(4,0);
    }
    else {
      (**(code **)(*(int *)piVar4[8] + 0x44))(piVar4[9],piVar4[10] + piVar4[0xb]);
      (**(code **)(*piVar4 + 8))(1,7);
    }
    break;
  case 1:
    piVar4 = extraout_var;
    (**(code **)(*(int *)extraout_var[8] + 0x44))
              (extraout_var[9],extraout_var[10] - extraout_var[0xb] / 2);
    (**(code **)(*piVar4 + 8))(2,7);
    break;
  case 2:
    piVar4 = extraout_var;
    (**(code **)(*(int *)extraout_var[8] + 0x44))
              (extraout_var[9],
               ((int)(extraout_var[0xb] + (extraout_var[0xb] >> 0x1f & 3U)) >> 2) + extraout_var[10]
              );
    (**(code **)(*piVar4 + 8))(3,4);
    break;
  case 3:
    piVar4 = extraout_var;
    (**(code **)(*(int *)extraout_var[8] + 0x44))
              (extraout_var[9],
               extraout_var[10] - ((int)(extraout_var[0xb] + (extraout_var[0xb] >> 0x1f & 7U)) >> 3)
              );
    (**(code **)(*piVar4 + 8))(4,4);
    break;
  case 4:
    piVar4 = extraout_var;
    (**(code **)(*(int *)extraout_var[8] + 0x44))
              (extraout_var[9],extraout_var[10],uVar2,extraout_var,uVar5);
    (**(code **)(*piVar4 + 8))(5,0);
    break;
  case 5:
    FUN_005f5df0(0);
  }
  return;
}

