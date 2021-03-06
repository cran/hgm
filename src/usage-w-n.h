/* This is automatically generated. Do not edit it.*/
oxprintfe("\n");
oxprintfe("hgm_w-n\n");
oxprintfe("     [--idata input_data_file] [--gnuplotf gnuplot_file_name]\n");
oxprintfe("     [--dataf output_data_file] [--raw]  [--xmax xmax] [--test m] [--step h]\n");
oxprintfe("     [ --95 --verbose]\n");
oxprintfe("     [ --strategy s --abserr ae --relerr re]\n");
oxprintfe("s:0 rk, s:1 adaptive, s:2 adaptive&multiply, see rk.c for the default value of ae and re.\n");
oxprintfe("strategy default = %d\n",MH_strategy);
oxprintfe("--raw does not add data parameters to the output_data_file.\n");
oxprintfe("The command hgm_w-n [options] evaluates the matrix hypergeometric function pFq by \n");
oxprintfe("the HGM (holonomic gradient method) from the initial value generated by hgm_jack-n.\n");
oxprintfe("\n");
oxprintfe("Parameters are specified by the input_data_file. Otherwise, default values are used.\n");
oxprintfe("By executing ./hgm_jack-n without argument, a sample input file is output.\n");
oxprintfe("The format of the input_data_file specified by --idata: \n");
oxprintfe("# or %%%% are used for a comment line.\n");
oxprintfe("The value of a parameter xyz is specified by %%xyz=value\n");
oxprintfe("Input data file should start with the line for the latest input data format: %s\n",VSTRING);
oxprintfe("\n");
oxprintfe("  p_pFq : p of pFq, a_1, ..., a_p\n");
oxprintfe("  q_pFq : q of pFq, b_1, ..., b_q\n");
oxprintfe("  Mg: m (the number of variables).\n");
oxprintfe("  Beta: vector of length m. Evaluation is done on the line Beta*x\n");
oxprintfe("        All Beta[i] must be different and must not be 0.\n");
oxprintfe("  X0g:  starting point of x >0. The initial value Iv must be given at X0g\n");
oxprintfe("  Iv: initial values at X0g*Beta evaluated by this program.\n");
oxprintfe("  Ef: a scalar factor to the initial value evaluated by this program.\n");
oxprintfe("  ef_type: exponential or scalar factor type.\n");
oxprintfe("    case 0: rare pFq  (Todo, not implemented)\n");
oxprintfe("    case 1: It is for the case of evaluating \n");
oxprintfe("        Pr({y | y<xmax}), which is the cumulative distribution function of the largest root \n");
oxprintfe("        of the m by m Wishart matrices with n degrees of freedom and the covariantce matrix \n");
oxprintfe("        sigma where \n");
oxprintfe("        Beta=sigma^(-1)/2 (diagonized) and  n must be given by Ng.\n");
oxprintfe("        p_pFq, q_pFq are automatically set for 1F1.\n");
oxprintfe("        Ef must be set properly.\n");
oxprintfe("    case 2: \n");
oxprintfe("        Pr({y | y<xmax}), which is the cumulative distribution function of the largest root\n");
oxprintfe("        of P Q^(-1) where P and Q are Wishart matrices. It uses 2F1 and Beta, p_pFq, q_pFq\n");
oxprintfe("        should be properly given.\n");
oxprintfe("        Ef must be set properly.\n");
oxprintfe("\n");
oxprintfe("  Hg: h (step size) for hgm_w-n.\n");
oxprintfe("  Dp: output data is stored in every Dp steps when output_data_file is specified. \n");
oxprintfe("      If it is 0, output data is not stored. If it is negative, Dp is automatically set to floor(1/Hg). Note that small Dp value makes the program slow. \n");
oxprintfe("  Xng: terminating value of x for hgm_w-n.\n");
oxprintfe("\n");
oxprintfe("\"--95: output the 95%%%% point. --verbose: verbose mode.\n");
oxprintfe("When --idata option is used, this command is quiet. Use --verbose option if you want to see some messages\n");
oxprintfe("\n");
oxprintfe("Examples:\n");
oxprintfe("[1] ./hgm_w-n \n");
oxprintfe("[2] ./hgm_w-n --xmax 20\n");
oxprintfe("[3] ./hgm_w-n --test 6\n");
oxprintfe("A test run in Mg=6.\n");
oxprintfe("[4] ./hgm_jack-n --idata Testdata/tmp-idata3.txt >t.txt\n");
oxprintfe("    ./hgm_w-n --idata t.txt --gnuplotf test-g --verbose\n");
oxprintfe("    gnuplot -persist <test-g-gp.txt\n");
oxprintfe("    tmp-idata3.txt is a sample input data distributed with this file.\n");
oxprintfe("    test-g-gp.txt is an input file of the gnuplot\n");
oxprintfe("    test-g is the table of x and the values of Pr({y | y<x}).\n");
oxprintfe("[5] ./hgm_jack-n --idata Testdata/new-2016-02-04-4.txt --verbose\n");
oxprintfe("\n");
oxprintfe("\n");
oxprintfe("\n");
