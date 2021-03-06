#pragma once


class fuku_mutation_x86 : 
    public fuku_mutation {

    fuku_asm_x86 f_asm;
    fuku_ob_settings settings;
    unsigned int * label_seed;

    void fuku_mutation_x86::fuku_junk_1b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);
    void fuku_mutation_x86::fuku_junk_2b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);
    void fuku_mutation_x86::fuku_junk_3b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);
    void fuku_mutation_x86::fuku_junk_4b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);
    void fuku_mutation_x86::fuku_junk_5b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);
    void fuku_mutation_x86::fuku_junk_6b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);
    void fuku_mutation_x86::fuku_junk_7b(std::vector<fuku_instruction>& out_lines, fuku_instruction* next_line, bool unstable_stack, uint16_t allow_flags_changes);

    void fuku_mutation_x86::generate_junk(std::vector<fuku_instruction>& junk,
        fuku_instruction* next_line, uint32_t max_size, size_t junk_size, bool unstable_stack, uint16_t allow_flags_changes);


    void fuku_mutation_x86::fuku_junk(std::vector<fuku_instruction>& lines, unsigned int current_line_idx,std::vector<fuku_instruction>& out_lines);

    bool fuku_mutation_x86::fukutate_push(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_pop(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_add(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_sub(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_and(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_inc(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_dec(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_test(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_cmp(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_jcc(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_jmp(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    bool fuku_mutation_x86::fukutate_ret(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);

    void fuku_mutation_x86::fukutation(std::vector<fuku_instruction>& lines, unsigned int current_line_idx, std::vector<fuku_instruction>& out_lines);
    void fuku_mutation_x86::obfuscate_lines(std::vector<fuku_instruction>& lines, unsigned int recurse_idx);

    uint32_t fuku_mutation_x86::set_label(fuku_instruction& line);
    uint32_t fuku_mutation_x86::get_maxlabel();
public:
    fuku_mutation_x86::fuku_mutation_x86(const fuku_ob_settings& settings, unsigned int * label_seed);
    fuku_mutation_x86::~fuku_mutation_x86();

    void fuku_mutation_x86::obfuscate(std::vector<fuku_instruction>& lines);

    void fuku_mutation_x86::get_junk(std::vector<uint8_t>& junk, size_t junk_size, bool unstable_stack, uint16_t allow_flags_changes);
};



