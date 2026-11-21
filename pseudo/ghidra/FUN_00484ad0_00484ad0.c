// FUN_00484ad0  00484ad0

undefined4 __thiscall FUN_00484ad0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if ((short)param_1[1] <= local_8) {
LAB_00484b3d:
      if ((short)param_1[1] <= local_8) {
        FUN_005e9f20("nIndex<shSize","..\\Casino\\PokerHand.cpp",0xab);
      }
      *(short *)(param_1 + 1) = (short)param_1[1] + -1;
      return param_2;
    }
    cVar1 = FUN_00464500(*param_1 + local_8);
    if (cVar1 != '\0') {
      if (local_8 != (short)param_1[1] + -1) {
        *(undefined1 *)(*param_1 + local_8) =
             *(undefined1 *)(*param_1 + -1 + (int)(short)param_1[1]);
      }
      goto LAB_00484b3d;
    }
    local_8 = local_8 + 1;
  } while( true );
}

