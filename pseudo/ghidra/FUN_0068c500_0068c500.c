// FUN_0068c500  0068c500

/* WARNING: Removing unreachable block (ram,0x0068c563) */
/* WARNING: Removing unreachable block (ram,0x0068c59c) */
/* WARNING: Removing unreachable block (ram,0x0068c5a4) */
/* WARNING: Removing unreachable block (ram,0x0068c5aa) */
/* WARNING: Removing unreachable block (ram,0x0068c615) */
/* WARNING: Removing unreachable block (ram,0x0068c640) */
/* WARNING: Removing unreachable block (ram,0x0068c648) */
/* WARNING: Removing unreachable block (ram,0x0068c64e) */
/* WARNING: Removing unreachable block (ram,0x0068c6cd) */
/* WARNING: Removing unreachable block (ram,0x0068c6f8) */
/* WARNING: Removing unreachable block (ram,0x0068c733) */
/* WARNING: Removing unreachable block (ram,0x0068c77c) */
/* WARNING: Removing unreachable block (ram,0x0068c74d) */
/* WARNING: Removing unreachable block (ram,0x0068c7ae) */
/* WARNING: Removing unreachable block (ram,0x0068c7d9) */
/* WARNING: Removing unreachable block (ram,0x0068c818) */
/* WARNING: Removing unreachable block (ram,0x0068c820) */
/* WARNING: Removing unreachable block (ram,0x0068c826) */
/* WARNING: Removing unreachable block (ram,0x0068c838) */
/* WARNING: Removing unreachable block (ram,0x0068c85f) */
/* WARNING: Removing unreachable block (ram,0x0068c8a8) */
/* WARNING: Removing unreachable block (ram,0x0068c879) */
/* WARNING: Removing unreachable block (ram,0x0068c660) */
/* WARNING: Removing unreachable block (ram,0x0068c69e) */
/* WARNING: Removing unreachable block (ram,0x0068c6c8) */
/* WARNING: Removing unreachable block (ram,0x0068c5bc) */
/* WARNING: Removing unreachable block (ram,0x0068c5e3) */
/* WARNING: Removing unreachable block (ram,0x0068c610) */
/* WARNING: Removing unreachable block (ram,0x0068c8d5) */

undefined4 * __thiscall
FUN_0068c500(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined1 local_48 [12];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0068d820(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
  }
  else {
    FUN_0068d4b0(**(undefined4 **)(param_1 + 4),param_1);
    cVar2 = FUN_006118f0(local_2c);
    if (cVar2 == '\0') {
      FUN_0068d4b0(*(undefined4 *)(param_1 + 4),param_1);
      cVar2 = FUN_006118f0(local_34);
      if (cVar2 == '\0') {
        bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(param_4 + 0xc));
        if (bVar3) {
          local_c = param_3;
          local_8 = param_4;
          FUN_0068f800();
          bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (local_8 + 0xc),param_5);
          if (bVar3) {
            if (*(char *)(*(int *)(local_8 + 8) + 0x45) != '\0') {
              FUN_0068d820(param_2,0,local_8,param_5);
              return param_2;
            }
            FUN_0068d820(param_2,1,param_4,param_5);
            return param_2;
          }
        }
        bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (param_4 + 0xc),param_5);
        if (bVar3) {
          local_c = param_3;
          local_8 = param_4;
          FUN_0068d4b0(*(undefined4 *)(param_1 + 4),param_1);
          FUN_0068edc0();
          cVar2 = FUN_006118f0(local_3c);
          if ((cVar2 != '\0') ||
             (bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                                (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)(local_8 + 0xc)), bVar3)) {
            if (*(char *)(*(int *)(param_4 + 8) + 0x45) != '\0') {
              FUN_0068d820(param_2,0,param_4,param_5);
              return param_2;
            }
            FUN_0068d820(param_2,1,local_8,param_5);
            return param_2;
          }
        }
      }
      else {
        bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (*(int *)(*(int *)(param_1 + 4) + 8) + 0xc),param_5);
        if (bVar3) {
          FUN_0068d820(param_2,0,*(undefined4 *)(*(int *)(param_1 + 4) + 8),param_5);
          return param_2;
        }
      }
    }
    else {
      bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (param_4 + 0xc));
      if (bVar3) {
        FUN_0068d820(param_2,1,param_4,param_5);
        return param_2;
      }
    }
    puVar4 = (undefined4 *)FUN_0068d5e0(local_48,param_5);
    uVar1 = puVar4[1];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
  }
  return param_2;
}

