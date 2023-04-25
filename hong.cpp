function seeded_reverse_pass!(result, output::TrackedReal, input, tape)
//pull_value!(output) retrieves the current value of the tracked variable output
// from the computational graph and stores it in the variable's value field.
    pull_value!(output)

    unseed!(input)
    seed!(output)
    reverse_pass!(tape)
    extract_result!(result, output, input)
    return result
end

function seeded_reverse_pass!(result, output::Number, input, tape)
    extract_result!(result, output)
    return result
end